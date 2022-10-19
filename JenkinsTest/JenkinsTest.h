#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_JenkinsTest.h"

class JenkinsTest : public QMainWindow
{
    Q_OBJECT

public:
    JenkinsTest(QWidget *parent = nullptr);
    ~JenkinsTest();

private:
    Ui::JenkinsTestClass ui;
};
