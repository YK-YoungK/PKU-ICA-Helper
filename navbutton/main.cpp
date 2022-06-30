#pragma execution_character_set("utf-8")

#include "frmnavbutton.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{

    qputenv("QT_SCALE_FACTOR", "2");

    QApplication a(argc, argv);
    QFont font;
    font.setFamily("Adobe Devanagari");
    font.setPixelSize(13);
    a.setFont(font);


#if (QT_VERSION < QT_VERSION_CHECK(5,0,0))
#if _MSC_VER
    QTextCodec *codec = QTextCodec::codecForName("gbk");
#else
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
#endif
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
#else
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForLocale(codec);
#endif

    frmNavButton w;
    w.show();

    return a.exec();
}
