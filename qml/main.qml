import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("AI Sniper")

    // TODO Добавь два текстовых поля для угла и модуля скорости

    Button {
        text: "Fire!!!: " + PhysicsEngine.lastResult
        anchors.centerIn: parent
        onClicked: {
            PhysicsEngine.fire(20, 1.);
        }
    }

    // TODO Добавь Текст для вывода значения результата (расстояние до)
}
