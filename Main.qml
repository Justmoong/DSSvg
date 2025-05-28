import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    height: 400
    visible: true
    width: 400

    Image {
        id: icon

        height: 128
        smooth: true
        "image:/logo.svg"
        width: 128
    }
}