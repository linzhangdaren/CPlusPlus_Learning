// 批量抠图脚本：自动抠出主体并保存为PNG
#target photoshop

// 选择图片文件夹

function main() {
    // 选择图片文件夹
    var inputFolder = Folder.selectDialog("请选择要批量抠图的图片文件夹");
    if (!inputFolder) {
        alert("未选择文件夹，脚本终止。");
        return;
    }

    // 选择输出文件夹
    var outputFolder = Folder.selectDialog("请选择输出文件夹");
    if (!outputFolder) {
        alert("未选择输出文件夹，脚本终止。");
        return;
    }

    // 支持的图片格式
    var exts = ['jpg', 'jpeg', 'png', 'bmp', 'tif', 'tiff'];
    var files = inputFolder.getFiles(function(f) {
        var ext = f.name.split('.').pop().toLowerCase();
        return f instanceof File && exts.indexOf(ext) !== -1;
    });

    for (var i = 0; i < files.length; i++) {
        var doc = open(files[i]);
        // 选择主体（PS 2018及以上支持）
        try {
            app.activeDocument.selection.selectSubject();
            app.activeDocument.selection.invert();
            app.activeDocument.selection.clear();
            app.activeDocument.selection.deselect();
        } catch (e) {
            alert("第" + (i+1) + "张图片抠图失败：" + files[i].name);
            doc.close(SaveOptions.DONOTSAVECHANGES);
            continue;
        }
        // 保存为PNG
        var saveFile = new File(outputFolder + "/" + doc.name.replace(/\.[^\.]+$/, ".png"));
        var opts = new PNGSaveOptions();
        doc.saveAs(saveFile, opts, true, Extension.LOWERCASE);
        doc.close(SaveOptions.DONOTSAVECHANGES);
    }
    alert("批量抠图完成！");
}

main();