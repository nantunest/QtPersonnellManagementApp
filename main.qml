import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

import People 1.0

ApplicationWindow {
    visible: true
    width: 480
    height: 800
    title: qsTr("Hello World")

    HourlyPaidEmployee{
        id:hpe
        done_hours: 10
        hourly_compensation: 10
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {
        }

        Page {
            Label {
                text: qsTr("Hourly paid: "+hpe.calc_salary())
                anchors.centerIn: parent
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("First")
        }
        TabButton {
            text: qsTr("Second")
        }
    }
}
