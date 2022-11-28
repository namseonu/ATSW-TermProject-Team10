/********************************************************************************
** Form generated from reading UI file 'visualizer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZER_H
#define UI_VISUALIZER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "visualizer/GraphWidget.h"
#include "visualizer/ViewportWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenLaserscan;
    QAction *actionRecord;
    QAction *actionOpen_Poses;
    QAction *actionSavePoses;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabOptions;
    QWidget *tab;
    QFormLayout *formLayout;
    QCheckBox *chkShowCoordinateAxis;
    QCheckBox *chkShowCurrentScan;
    QCheckBox *chkShowRobot;
    QCheckBox *chkShowPoses;
    QCheckBox *chkShowLastFrame;
    QCheckBox *chkShowGroundtruth;
    QCheckBox *chkFollowPose;
    QCheckBox *chkShowHistory;
    QSpinBox *spinHistorySize;
    QCheckBox *chkOldMapOnly;
    QCheckBox *chkColorizeHistory;
    QCheckBox *chkBirdsEyeView;
    QCheckBox *chkRemoveGround;
    QGroupBox *groupBox_8;
    QFormLayout *formLayout_15;
    QCheckBox *chkShowCurrentSurfels;
    QLabel *label_30;
    QComboBox *cmbSurfelColor;
    QComboBox *cmbSurfelDrawMode;
    QLabel *label_33;
    QCheckBox *chkShowNormalMap;
    QCheckBox *chkShowNormalMap3d;
    QCheckBox *chkShowVertexMap3d;
    QCheckBox *chkFastMode;
    QCheckBox *chkShowGraphWidget;
    QLabel *label_3;
    QProgressBar *pbGpuMemory;
    QPushButton *btnRenderMaps;
    QPushButton *btnRosNode;
    QCheckBox *chkShowSemanticMap;
    QWidget *tab_8;
    QFormLayout *formLayout_16;
    QLabel *label;
    QSpinBox *spinPointSize;
    QLabel *label_2;
    QComboBox *cmbPointColorMode;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QCheckBox *chkShowDepthImage;
    QLabel *label_4;
    QComboBox *cmbDepthColorMode;
    QCheckBox *chkMarkInvalidDepthValues;
    QWidget *tab_7;
    QFormLayout *formLayout_14;
    QCheckBox *chkBilateralFiltering;
    QLabel *label_27;
    QLabel *label_28;
    QDoubleSpinBox *spinBilateralSigmaSpace;
    QDoubleSpinBox *spinBilateralSigmaRange;
    QCheckBox *chkFilterVertices;
    QWidget *tab_2;
    QFormLayout *formLayout_4;
    QCheckBox *chkShowIcpEstimate;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnIcpPlay;
    QToolButton *btnIcpStep;
    QToolButton *btnIcpReset;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblIcpIteration;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_13;
    QLabel *label_19;
    QSpinBox *spinIcpMaxIterations;
    QLabel *label_18;
    QDoubleSpinBox *spinIcpMaxDistance;
    QLabel *label_17;
    QDoubleSpinBox *spinIcpMaxAngle;
    QLabel *label_5;
    QComboBox *cmbOptWeighting;
    QLabel *label_29;
    QDoubleSpinBox *spinOptFactor;
    QCheckBox *chkWarmStart;
    QCheckBox *chkShowOdomPoses;
    QWidget *tab_3;
    QFormLayout *formLayout_6;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QCheckBox *chkShowSubmaps;
    QCheckBox *chkShowUpdatedSurfels;
    QCheckBox *chkShpowNewSurfels;
    QCheckBox *chkBackfaceCulling;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_10;
    QLabel *label_13;
    QDoubleSpinBox *spinConfidenceThreshold;
    QLabel *label_31;
    QDoubleSpinBox *spinMapMaxDistance;
    QLabel *label_32;
    QDoubleSpinBox *spinMapMaxAngle;
    QLabel *label_15;
    QLabel *label_14;
    QDoubleSpinBox *spinProbStable;
    QLabel *label_16;
    QDoubleSpinBox *spinProbPrior;
    QLabel *label_22;
    QLabel *label_24;
    QDoubleSpinBox *spinSigmaAngle;
    QLabel *label_25;
    QDoubleSpinBox *spinSigmaDistance;
    QLabel *label_34;
    QLabel *label_35;
    QComboBox *cmbWeightingScheme;
    QLabel *label_36;
    QComboBox *cmbAveragingScheme;
    QCheckBox *chkUpdateAlways;
    QWidget *widget;
    QFormLayout *formLayout_8;
    QCheckBox *chkShowPosegraph;
    QLabel *label_6;
    QComboBox *comboBox;
    QPushButton *btnInitialize;
    QPushButton *btnOptimize;
    QPushButton *btnSavePosegraph;
    QCheckBox *chkShowCandidates;
    QCheckBox *chkShowLoopPoses;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *spinResidualThres;
    QDoubleSpinBox *spinOutlierThres;
    QDoubleSpinBox *spinValidThres;
    QPushButton *btnResidualPlot;
    QVBoxLayout *verticalLayout;
    ViewportWidget *wCanvas;
    GraphWidget *wGraph;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnPlay;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnNext;
    QToolButton *btnReset;
    QSpacerItem *horizontalSpacer_2;
    QSlider *sldTimeline;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *txtScanNumber;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1583, 831);
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        MainWindow->setFont(font);
        actionOpenLaserscan = new QAction(MainWindow);
        actionOpenLaserscan->setObjectName(QString::fromUtf8("actionOpenLaserscan"));
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionRecord->setCheckable(true);
        actionOpen_Poses = new QAction(MainWindow);
        actionOpen_Poses->setObjectName(QString::fromUtf8("actionOpen_Poses"));
        actionSavePoses = new QAction(MainWindow);
        actionSavePoses->setObjectName(QString::fromUtf8("actionSavePoses"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setFont(font);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabOptions = new QTabWidget(centralwidget);
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabOptions->sizePolicy().hasHeightForWidth());
        tabOptions->setSizePolicy(sizePolicy);
        tabOptions->setMinimumSize(QSize(300, 0));
        tabOptions->setBaseSize(QSize(110, 0));
        tabOptions->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        chkShowCoordinateAxis = new QCheckBox(tab);
        chkShowCoordinateAxis->setObjectName(QString::fromUtf8("chkShowCoordinateAxis"));
        chkShowCoordinateAxis->setChecked(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, chkShowCoordinateAxis);

        chkShowCurrentScan = new QCheckBox(tab);
        chkShowCurrentScan->setObjectName(QString::fromUtf8("chkShowCurrentScan"));
        chkShowCurrentScan->setChecked(false);

        formLayout->setWidget(1, QFormLayout::SpanningRole, chkShowCurrentScan);

        chkShowRobot = new QCheckBox(tab);
        chkShowRobot->setObjectName(QString::fromUtf8("chkShowRobot"));
        chkShowRobot->setChecked(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, chkShowRobot);

        chkShowPoses = new QCheckBox(tab);
        chkShowPoses->setObjectName(QString::fromUtf8("chkShowPoses"));
        chkShowPoses->setChecked(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, chkShowPoses);

        chkShowLastFrame = new QCheckBox(tab);
        chkShowLastFrame->setObjectName(QString::fromUtf8("chkShowLastFrame"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, chkShowLastFrame);

        chkShowGroundtruth = new QCheckBox(tab);
        chkShowGroundtruth->setObjectName(QString::fromUtf8("chkShowGroundtruth"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, chkShowGroundtruth);

        chkFollowPose = new QCheckBox(tab);
        chkFollowPose->setObjectName(QString::fromUtf8("chkFollowPose"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, chkFollowPose);

        chkShowHistory = new QCheckBox(tab);
        chkShowHistory->setObjectName(QString::fromUtf8("chkShowHistory"));
        chkShowHistory->setEnabled(true);
        chkShowHistory->setChecked(false);

        formLayout->setWidget(7, QFormLayout::LabelRole, chkShowHistory);

        spinHistorySize = new QSpinBox(tab);
        spinHistorySize->setObjectName(QString::fromUtf8("spinHistorySize"));
        spinHistorySize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinHistorySize->setMinimum(1);
        spinHistorySize->setMaximum(50);
        spinHistorySize->setValue(10);

        formLayout->setWidget(7, QFormLayout::FieldRole, spinHistorySize);

        chkOldMapOnly = new QCheckBox(tab);
        chkOldMapOnly->setObjectName(QString::fromUtf8("chkOldMapOnly"));

        formLayout->setWidget(8, QFormLayout::LabelRole, chkOldMapOnly);

        chkColorizeHistory = new QCheckBox(tab);
        chkColorizeHistory->setObjectName(QString::fromUtf8("chkColorizeHistory"));

        formLayout->setWidget(8, QFormLayout::FieldRole, chkColorizeHistory);

        chkBirdsEyeView = new QCheckBox(tab);
        chkBirdsEyeView->setObjectName(QString::fromUtf8("chkBirdsEyeView"));

        formLayout->setWidget(9, QFormLayout::LabelRole, chkBirdsEyeView);

        chkRemoveGround = new QCheckBox(tab);
        chkRemoveGround->setObjectName(QString::fromUtf8("chkRemoveGround"));

        formLayout->setWidget(9, QFormLayout::FieldRole, chkRemoveGround);

        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        formLayout_15 = new QFormLayout(groupBox_8);
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        chkShowCurrentSurfels = new QCheckBox(groupBox_8);
        chkShowCurrentSurfels->setObjectName(QString::fromUtf8("chkShowCurrentSurfels"));
        chkShowCurrentSurfels->setChecked(true);

        formLayout_15->setWidget(0, QFormLayout::SpanningRole, chkShowCurrentSurfels);

        label_30 = new QLabel(groupBox_8);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(60, 0));

        formLayout_15->setWidget(1, QFormLayout::LabelRole, label_30);

        cmbSurfelColor = new QComboBox(groupBox_8);
        cmbSurfelColor->addItem(QString());
        cmbSurfelColor->addItem(QString());
        cmbSurfelColor->addItem(QString());
        cmbSurfelColor->addItem(QString());
        cmbSurfelColor->addItem(QString());
        cmbSurfelColor->addItem(QString());
        cmbSurfelColor->setObjectName(QString::fromUtf8("cmbSurfelColor"));

        formLayout_15->setWidget(1, QFormLayout::FieldRole, cmbSurfelColor);

        cmbSurfelDrawMode = new QComboBox(groupBox_8);
        cmbSurfelDrawMode->addItem(QString());
        cmbSurfelDrawMode->addItem(QString());
        cmbSurfelDrawMode->setObjectName(QString::fromUtf8("cmbSurfelDrawMode"));

        formLayout_15->setWidget(2, QFormLayout::FieldRole, cmbSurfelDrawMode);

        label_33 = new QLabel(groupBox_8);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_15->setWidget(2, QFormLayout::LabelRole, label_33);


        formLayout->setWidget(10, QFormLayout::SpanningRole, groupBox_8);

        chkShowNormalMap = new QCheckBox(tab);
        chkShowNormalMap->setObjectName(QString::fromUtf8("chkShowNormalMap"));
        chkShowNormalMap->setEnabled(true);
        chkShowNormalMap->setChecked(false);

        formLayout->setWidget(11, QFormLayout::SpanningRole, chkShowNormalMap);

        chkShowNormalMap3d = new QCheckBox(tab);
        chkShowNormalMap3d->setObjectName(QString::fromUtf8("chkShowNormalMap3d"));

        formLayout->setWidget(13, QFormLayout::SpanningRole, chkShowNormalMap3d);

        chkShowVertexMap3d = new QCheckBox(tab);
        chkShowVertexMap3d->setObjectName(QString::fromUtf8("chkShowVertexMap3d"));

        formLayout->setWidget(14, QFormLayout::SpanningRole, chkShowVertexMap3d);

        chkFastMode = new QCheckBox(tab);
        chkFastMode->setObjectName(QString::fromUtf8("chkFastMode"));
        chkFastMode->setChecked(true);

        formLayout->setWidget(15, QFormLayout::SpanningRole, chkFastMode);

        chkShowGraphWidget = new QCheckBox(tab);
        chkShowGraphWidget->setObjectName(QString::fromUtf8("chkShowGraphWidget"));
        chkShowGraphWidget->setChecked(true);

        formLayout->setWidget(16, QFormLayout::SpanningRole, chkShowGraphWidget);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(17, QFormLayout::LabelRole, label_3);

        pbGpuMemory = new QProgressBar(tab);
        pbGpuMemory->setObjectName(QString::fromUtf8("pbGpuMemory"));
        pbGpuMemory->setValue(24);
        pbGpuMemory->setTextVisible(true);

        formLayout->setWidget(17, QFormLayout::FieldRole, pbGpuMemory);

        btnRenderMaps = new QPushButton(tab);
        btnRenderMaps->setObjectName(QString::fromUtf8("btnRenderMaps"));

        formLayout->setWidget(18, QFormLayout::SpanningRole, btnRenderMaps);

        btnRosNode = new QPushButton(tab);
        btnRosNode->setObjectName(QString::fromUtf8("btnRosNode"));

        formLayout->setWidget(19, QFormLayout::LabelRole, btnRosNode);

        chkShowSemanticMap = new QCheckBox(tab);
        chkShowSemanticMap->setObjectName(QString::fromUtf8("chkShowSemanticMap"));
        chkShowSemanticMap->setChecked(true);

        formLayout->setWidget(12, QFormLayout::LabelRole, chkShowSemanticMap);

        tabOptions->addTab(tab, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        formLayout_16 = new QFormLayout(tab_8);
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        label = new QLabel(tab_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(125, 0));

        formLayout_16->setWidget(1, QFormLayout::LabelRole, label);

        spinPointSize = new QSpinBox(tab_8);
        spinPointSize->setObjectName(QString::fromUtf8("spinPointSize"));
        spinPointSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPointSize->setMinimum(1);

        formLayout_16->setWidget(1, QFormLayout::FieldRole, spinPointSize);

        label_2 = new QLabel(tab_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));

        formLayout_16->setWidget(3, QFormLayout::LabelRole, label_2);

        cmbPointColorMode = new QComboBox(tab_8);
        cmbPointColorMode->addItem(QString());
        cmbPointColorMode->addItem(QString());
        cmbPointColorMode->addItem(QString());
        cmbPointColorMode->setObjectName(QString::fromUtf8("cmbPointColorMode"));

        formLayout_16->setWidget(3, QFormLayout::FieldRole, cmbPointColorMode);

        groupBox = new QGroupBox(tab_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        chkShowDepthImage = new QCheckBox(groupBox);
        chkShowDepthImage->setObjectName(QString::fromUtf8("chkShowDepthImage"));
        chkShowDepthImage->setChecked(false);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, chkShowDepthImage);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        cmbDepthColorMode = new QComboBox(groupBox);
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->addItem(QString());
        cmbDepthColorMode->setObjectName(QString::fromUtf8("cmbDepthColorMode"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cmbDepthColorMode);

        chkMarkInvalidDepthValues = new QCheckBox(groupBox);
        chkMarkInvalidDepthValues->setObjectName(QString::fromUtf8("chkMarkInvalidDepthValues"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, chkMarkInvalidDepthValues);


        formLayout_16->setWidget(4, QFormLayout::SpanningRole, groupBox);

        tabOptions->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        formLayout_14 = new QFormLayout(tab_7);
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        chkBilateralFiltering = new QCheckBox(tab_7);
        chkBilateralFiltering->setObjectName(QString::fromUtf8("chkBilateralFiltering"));

        formLayout_14->setWidget(0, QFormLayout::SpanningRole, chkBilateralFiltering);

        label_27 = new QLabel(tab_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(100, 0));

        formLayout_14->setWidget(1, QFormLayout::LabelRole, label_27);

        label_28 = new QLabel(tab_7);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout_14->setWidget(2, QFormLayout::LabelRole, label_28);

        spinBilateralSigmaSpace = new QDoubleSpinBox(tab_7);
        spinBilateralSigmaSpace->setObjectName(QString::fromUtf8("spinBilateralSigmaSpace"));
        spinBilateralSigmaSpace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBilateralSigmaSpace->setDecimals(1);
        spinBilateralSigmaSpace->setSingleStep(0.100000000000000);
        spinBilateralSigmaSpace->setValue(2.500000000000000);

        formLayout_14->setWidget(1, QFormLayout::FieldRole, spinBilateralSigmaSpace);

        spinBilateralSigmaRange = new QDoubleSpinBox(tab_7);
        spinBilateralSigmaRange->setObjectName(QString::fromUtf8("spinBilateralSigmaRange"));
        spinBilateralSigmaRange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBilateralSigmaRange->setDecimals(1);
        spinBilateralSigmaRange->setSingleStep(0.100000000000000);
        spinBilateralSigmaRange->setValue(2.500000000000000);

        formLayout_14->setWidget(2, QFormLayout::FieldRole, spinBilateralSigmaRange);

        chkFilterVertices = new QCheckBox(tab_7);
        chkFilterVertices->setObjectName(QString::fromUtf8("chkFilterVertices"));

        formLayout_14->setWidget(3, QFormLayout::SpanningRole, chkFilterVertices);

        tabOptions->addTab(tab_7, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayout_4 = new QFormLayout(tab_2);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        chkShowIcpEstimate = new QCheckBox(tab_2);
        chkShowIcpEstimate->setObjectName(QString::fromUtf8("chkShowIcpEstimate"));
        chkShowIcpEstimate->setChecked(true);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, chkShowIcpEstimate);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_5 = new QFormLayout(groupBox_3);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnIcpPlay = new QToolButton(groupBox_3);
        btnIcpPlay->setObjectName(QString::fromUtf8("btnIcpPlay"));
        btnIcpPlay->setMinimumSize(QSize(24, 24));
        btnIcpPlay->setMaximumSize(QSize(24, 24));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("media-playback-start");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnIcpPlay->setIcon(icon);
        btnIcpPlay->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btnIcpPlay);

        btnIcpStep = new QToolButton(groupBox_3);
        btnIcpStep->setObjectName(QString::fromUtf8("btnIcpStep"));
        btnIcpStep->setMinimumSize(QSize(24, 24));
        btnIcpStep->setMaximumSize(QSize(24, 24));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("media-skip-forward");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("../../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnIcpStep->setIcon(icon1);
        btnIcpStep->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btnIcpStep);

        btnIcpReset = new QToolButton(groupBox_3);
        btnIcpReset->setObjectName(QString::fromUtf8("btnIcpReset"));
        btnIcpReset->setMinimumSize(QSize(20, 20));
        btnIcpReset->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("media-playback-stop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("../../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnIcpReset->setIcon(icon2);

        horizontalLayout_3->addWidget(btnIcpReset);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        lblIcpIteration = new QLabel(groupBox_3);
        lblIcpIteration->setObjectName(QString::fromUtf8("lblIcpIteration"));

        horizontalLayout_3->addWidget(lblIcpIteration);


        formLayout_5->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_3);


        formLayout_4->setWidget(1, QFormLayout::SpanningRole, groupBox_3);

        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        formLayout_13 = new QFormLayout(groupBox_7);
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_19 = new QLabel(groupBox_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_19);

        spinIcpMaxIterations = new QSpinBox(groupBox_7);
        spinIcpMaxIterations->setObjectName(QString::fromUtf8("spinIcpMaxIterations"));
        spinIcpMaxIterations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, spinIcpMaxIterations);

        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_13->setWidget(2, QFormLayout::LabelRole, label_18);

        spinIcpMaxDistance = new QDoubleSpinBox(groupBox_7);
        spinIcpMaxDistance->setObjectName(QString::fromUtf8("spinIcpMaxDistance"));
        spinIcpMaxDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinIcpMaxDistance->setDecimals(1);

        formLayout_13->setWidget(2, QFormLayout::FieldRole, spinIcpMaxDistance);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_13->setWidget(3, QFormLayout::LabelRole, label_17);

        spinIcpMaxAngle = new QDoubleSpinBox(groupBox_7);
        spinIcpMaxAngle->setObjectName(QString::fromUtf8("spinIcpMaxAngle"));
        spinIcpMaxAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinIcpMaxAngle->setDecimals(1);

        formLayout_13->setWidget(3, QFormLayout::FieldRole, spinIcpMaxAngle);

        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_13->setWidget(4, QFormLayout::LabelRole, label_5);

        cmbOptWeighting = new QComboBox(groupBox_7);
        cmbOptWeighting->addItem(QString());
        cmbOptWeighting->addItem(QString());
        cmbOptWeighting->addItem(QString());
        cmbOptWeighting->setObjectName(QString::fromUtf8("cmbOptWeighting"));

        formLayout_13->setWidget(4, QFormLayout::FieldRole, cmbOptWeighting);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_13->setWidget(5, QFormLayout::LabelRole, label_29);

        spinOptFactor = new QDoubleSpinBox(groupBox_7);
        spinOptFactor->setObjectName(QString::fromUtf8("spinOptFactor"));

        formLayout_13->setWidget(5, QFormLayout::FieldRole, spinOptFactor);

        chkWarmStart = new QCheckBox(groupBox_7);
        chkWarmStart->setObjectName(QString::fromUtf8("chkWarmStart"));
        chkWarmStart->setChecked(true);

        formLayout_13->setWidget(6, QFormLayout::SpanningRole, chkWarmStart);


        formLayout_4->setWidget(4, QFormLayout::SpanningRole, groupBox_7);

        chkShowOdomPoses = new QCheckBox(tab_2);
        chkShowOdomPoses->setObjectName(QString::fromUtf8("chkShowOdomPoses"));

        formLayout_4->setWidget(2, QFormLayout::SpanningRole, chkShowOdomPoses);

        tabOptions->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayout_6 = new QFormLayout(tab_3);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        chkShowSubmaps = new QCheckBox(groupBox_2);
        chkShowSubmaps->setObjectName(QString::fromUtf8("chkShowSubmaps"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, chkShowSubmaps);

        chkShowUpdatedSurfels = new QCheckBox(groupBox_2);
        chkShowUpdatedSurfels->setObjectName(QString::fromUtf8("chkShowUpdatedSurfels"));

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, chkShowUpdatedSurfels);

        chkShpowNewSurfels = new QCheckBox(groupBox_2);
        chkShpowNewSurfels->setObjectName(QString::fromUtf8("chkShpowNewSurfels"));

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, chkShpowNewSurfels);

        chkBackfaceCulling = new QCheckBox(groupBox_2);
        chkBackfaceCulling->setObjectName(QString::fromUtf8("chkBackfaceCulling"));

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, chkBackfaceCulling);


        formLayout_6->setWidget(0, QFormLayout::LabelRole, groupBox_2);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        formLayout_10 = new QFormLayout(groupBox_6);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_13);

        spinConfidenceThreshold = new QDoubleSpinBox(groupBox_6);
        spinConfidenceThreshold->setObjectName(QString::fromUtf8("spinConfidenceThreshold"));
        spinConfidenceThreshold->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinConfidenceThreshold->setDecimals(1);
        spinConfidenceThreshold->setMaximum(20.000000000000000);
        spinConfidenceThreshold->setSingleStep(1.000000000000000);
        spinConfidenceThreshold->setValue(10.000000000000000);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, spinConfidenceThreshold);

        label_31 = new QLabel(groupBox_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_31);

        spinMapMaxDistance = new QDoubleSpinBox(groupBox_6);
        spinMapMaxDistance->setObjectName(QString::fromUtf8("spinMapMaxDistance"));
        spinMapMaxDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMapMaxDistance->setDecimals(1);
        spinMapMaxDistance->setSingleStep(0.100000000000000);
        spinMapMaxDistance->setValue(0.200000000000000);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, spinMapMaxDistance);

        label_32 = new QLabel(groupBox_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_32);

        spinMapMaxAngle = new QDoubleSpinBox(groupBox_6);
        spinMapMaxAngle->setObjectName(QString::fromUtf8("spinMapMaxAngle"));
        spinMapMaxAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMapMaxAngle->setDecimals(1);
        spinMapMaxAngle->setMaximum(180.000000000000000);
        spinMapMaxAngle->setValue(60.000000000000000);

        formLayout_10->setWidget(2, QFormLayout::FieldRole, spinMapMaxAngle);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_15->setFont(font1);

        formLayout_10->setWidget(3, QFormLayout::SpanningRole, label_15);

        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(75, 0));
        label_14->setBaseSize(QSize(0, 0));

        formLayout_10->setWidget(4, QFormLayout::LabelRole, label_14);

        spinProbStable = new QDoubleSpinBox(groupBox_6);
        spinProbStable->setObjectName(QString::fromUtf8("spinProbStable"));
        spinProbStable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinProbStable->setMaximum(1.000000000000000);
        spinProbStable->setSingleStep(0.100000000000000);
        spinProbStable->setValue(0.600000000000000);

        formLayout_10->setWidget(4, QFormLayout::FieldRole, spinProbStable);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_10->setWidget(5, QFormLayout::LabelRole, label_16);

        spinProbPrior = new QDoubleSpinBox(groupBox_6);
        spinProbPrior->setObjectName(QString::fromUtf8("spinProbPrior"));
        spinProbPrior->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinProbPrior->setMinimum(0.000000000000000);
        spinProbPrior->setMaximum(1.000000000000000);
        spinProbPrior->setSingleStep(0.100000000000000);
        spinProbPrior->setValue(0.500000000000000);

        formLayout_10->setWidget(5, QFormLayout::FieldRole, spinProbPrior);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);

        formLayout_10->setWidget(6, QFormLayout::SpanningRole, label_22);

        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_10->setWidget(7, QFormLayout::LabelRole, label_24);

        spinSigmaAngle = new QDoubleSpinBox(groupBox_6);
        spinSigmaAngle->setObjectName(QString::fromUtf8("spinSigmaAngle"));
        spinSigmaAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSigmaAngle->setDecimals(1);

        formLayout_10->setWidget(7, QFormLayout::FieldRole, spinSigmaAngle);

        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_10->setWidget(8, QFormLayout::LabelRole, label_25);

        spinSigmaDistance = new QDoubleSpinBox(groupBox_6);
        spinSigmaDistance->setObjectName(QString::fromUtf8("spinSigmaDistance"));
        spinSigmaDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(8, QFormLayout::FieldRole, spinSigmaDistance);

        label_34 = new QLabel(groupBox_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font1);

        formLayout_10->setWidget(9, QFormLayout::SpanningRole, label_34);

        label_35 = new QLabel(groupBox_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        formLayout_10->setWidget(10, QFormLayout::LabelRole, label_35);

        cmbWeightingScheme = new QComboBox(groupBox_6);
        cmbWeightingScheme->addItem(QString());
        cmbWeightingScheme->addItem(QString());
        cmbWeightingScheme->addItem(QString());
        cmbWeightingScheme->setObjectName(QString::fromUtf8("cmbWeightingScheme"));

        formLayout_10->setWidget(10, QFormLayout::FieldRole, cmbWeightingScheme);

        label_36 = new QLabel(groupBox_6);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        formLayout_10->setWidget(12, QFormLayout::LabelRole, label_36);

        cmbAveragingScheme = new QComboBox(groupBox_6);
        cmbAveragingScheme->addItem(QString());
        cmbAveragingScheme->addItem(QString());
        cmbAveragingScheme->setObjectName(QString::fromUtf8("cmbAveragingScheme"));

        formLayout_10->setWidget(12, QFormLayout::FieldRole, cmbAveragingScheme);

        chkUpdateAlways = new QCheckBox(groupBox_6);
        chkUpdateAlways->setObjectName(QString::fromUtf8("chkUpdateAlways"));

        formLayout_10->setWidget(13, QFormLayout::SpanningRole, chkUpdateAlways);


        formLayout_6->setWidget(1, QFormLayout::SpanningRole, groupBox_6);

        tabOptions->addTab(tab_3, QString());
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        formLayout_8 = new QFormLayout(widget);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        chkShowPosegraph = new QCheckBox(widget);
        chkShowPosegraph->setObjectName(QString::fromUtf8("chkShowPosegraph"));
        chkShowPosegraph->setChecked(true);

        formLayout_8->setWidget(0, QFormLayout::SpanningRole, chkShowPosegraph);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_8->setWidget(1, QFormLayout::SpanningRole, label_6);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_8->setWidget(2, QFormLayout::SpanningRole, comboBox);

        btnInitialize = new QPushButton(widget);
        btnInitialize->setObjectName(QString::fromUtf8("btnInitialize"));
        btnInitialize->setMinimumSize(QSize(116, 0));

        formLayout_8->setWidget(3, QFormLayout::LabelRole, btnInitialize);

        btnOptimize = new QPushButton(widget);
        btnOptimize->setObjectName(QString::fromUtf8("btnOptimize"));

        formLayout_8->setWidget(3, QFormLayout::FieldRole, btnOptimize);

        btnSavePosegraph = new QPushButton(widget);
        btnSavePosegraph->setObjectName(QString::fromUtf8("btnSavePosegraph"));

        formLayout_8->setWidget(5, QFormLayout::SpanningRole, btnSavePosegraph);

        chkShowCandidates = new QCheckBox(widget);
        chkShowCandidates->setObjectName(QString::fromUtf8("chkShowCandidates"));

        formLayout_8->setWidget(6, QFormLayout::SpanningRole, chkShowCandidates);

        chkShowLoopPoses = new QCheckBox(widget);
        chkShowLoopPoses->setObjectName(QString::fromUtf8("chkShowLoopPoses"));

        formLayout_8->setWidget(7, QFormLayout::SpanningRole, chkShowLoopPoses);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_8->setWidget(8, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_8->setWidget(9, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_8->setWidget(10, QFormLayout::LabelRole, label_11);

        spinResidualThres = new QDoubleSpinBox(widget);
        spinResidualThres->setObjectName(QString::fromUtf8("spinResidualThres"));
        spinResidualThres->setSingleStep(0.100000000000000);
        spinResidualThres->setValue(0.500000000000000);

        formLayout_8->setWidget(8, QFormLayout::FieldRole, spinResidualThres);

        spinOutlierThres = new QDoubleSpinBox(widget);
        spinOutlierThres->setObjectName(QString::fromUtf8("spinOutlierThres"));
        spinOutlierThres->setSingleStep(0.100000000000000);
        spinOutlierThres->setValue(0.500000000000000);

        formLayout_8->setWidget(9, QFormLayout::FieldRole, spinOutlierThres);

        spinValidThres = new QDoubleSpinBox(widget);
        spinValidThres->setObjectName(QString::fromUtf8("spinValidThres"));
        spinValidThres->setSingleStep(0.100000000000000);
        spinValidThres->setValue(0.500000000000000);

        formLayout_8->setWidget(10, QFormLayout::FieldRole, spinValidThres);

        btnResidualPlot = new QPushButton(widget);
        btnResidualPlot->setObjectName(QString::fromUtf8("btnResidualPlot"));

        formLayout_8->setWidget(11, QFormLayout::SpanningRole, btnResidualPlot);

        tabOptions->addTab(widget, QString());

        horizontalLayout->addWidget(tabOptions);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        wCanvas = new ViewportWidget(centralwidget);
        wCanvas->setObjectName(QString::fromUtf8("wCanvas"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wCanvas->sizePolicy().hasHeightForWidth());
        wCanvas->setSizePolicy(sizePolicy1);
        wCanvas->setMinimumSize(QSize(600, 600));
        wGraph = new GraphWidget(wCanvas);
        wGraph->setObjectName(QString::fromUtf8("wGraph"));
        wGraph->setGeometry(QRect(5, 5, 301, 191));

        verticalLayout->addWidget(wCanvas);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        btnPlay = new QToolButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnPlay->sizePolicy().hasHeightForWidth());
        btnPlay->setSizePolicy(sizePolicy2);
        btnPlay->setMinimumSize(QSize(40, 40));
        btnPlay->setMaximumSize(QSize(40, 40));
        btnPlay->setBaseSize(QSize(40, 40));
        btnPlay->setIcon(icon);
        btnPlay->setCheckable(true);

        horizontalLayout_2->addWidget(btnPlay);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnNext = new QToolButton(centralwidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setEnabled(false);
        sizePolicy2.setHeightForWidth(btnNext->sizePolicy().hasHeightForWidth());
        btnNext->setSizePolicy(sizePolicy2);
        btnNext->setMinimumSize(QSize(30, 30));
        btnNext->setMaximumSize(QSize(30, 30));
        btnNext->setIcon(icon1);

        horizontalLayout_2->addWidget(btnNext);

        btnReset = new QToolButton(centralwidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setEnabled(false);
        sizePolicy2.setHeightForWidth(btnReset->sizePolicy().hasHeightForWidth());
        btnReset->setSizePolicy(sizePolicy2);
        btnReset->setMaximumSize(QSize(30, 30));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("media-skip-backward");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("../../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        btnReset->setIcon(icon3);

        horizontalLayout_2->addWidget(btnReset);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sldTimeline = new QSlider(centralwidget);
        sldTimeline->setObjectName(QString::fromUtf8("sldTimeline"));
        sldTimeline->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sldTimeline->sizePolicy().hasHeightForWidth());
        sldTimeline->setSizePolicy(sizePolicy3);
        sldTimeline->setMinimumSize(QSize(0, 0));
        sldTimeline->setMaximumSize(QSize(16777215, 16777215));
        sldTimeline->setTracking(false);
        sldTimeline->setOrientation(Qt::Horizontal);
        sldTimeline->setTickPosition(QSlider::TicksBelow);
        sldTimeline->setTickInterval(50);

        horizontalLayout_2->addWidget(sldTimeline);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        txtScanNumber = new QLineEdit(centralwidget);
        txtScanNumber->setObjectName(QString::fromUtf8("txtScanNumber"));
        txtScanNumber->setMaximumSize(QSize(60, 16777215));
        txtScanNumber->setMaxLength(5);
        txtScanNumber->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(txtScanNumber);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1583, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(actionOpenLaserscan);
        menu_File->addAction(actionOpen_Poses);
        menu_File->addAction(actionSavePoses);
        toolBar->addAction(actionOpenLaserscan);
        toolBar->addAction(actionRecord);

        retranslateUi(MainWindow);

        tabOptions->setCurrentIndex(0);
        cmbSurfelColor->setCurrentIndex(5);
        cmbPointColorMode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LaserFusion", nullptr));
        actionOpenLaserscan->setText(QApplication::translate("MainWindow", "&Open Lasercan...", nullptr));
        actionRecord->setText(QApplication::translate("MainWindow", "Record", nullptr));
        actionOpen_Poses->setText(QApplication::translate("MainWindow", "Open Poses...", nullptr));
        actionSavePoses->setText(QApplication::translate("MainWindow", "Save Poses...", nullptr));
        chkShowCoordinateAxis->setText(QApplication::translate("MainWindow", "Show coordinate axis", nullptr));
        chkShowCurrentScan->setText(QApplication::translate("MainWindow", "Show current scan", nullptr));
        chkShowRobot->setText(QApplication::translate("MainWindow", "Show Robot", nullptr));
        chkShowPoses->setText(QApplication::translate("MainWindow", "Show estimated poses", nullptr));
        chkShowLastFrame->setText(QApplication::translate("MainWindow", "Show last frame", nullptr));
        chkShowGroundtruth->setText(QApplication::translate("MainWindow", "Show ground truth", nullptr));
        chkFollowPose->setText(QApplication::translate("MainWindow", "Follow pose", nullptr));
        chkShowHistory->setText(QApplication::translate("MainWindow", "Show history", nullptr));
        chkOldMapOnly->setText(QApplication::translate("MainWindow", "Old Map", nullptr));
        chkColorizeHistory->setText(QApplication::translate("MainWindow", "Colorize history", nullptr));
        chkBirdsEyeView->setText(QApplication::translate("MainWindow", "Bird's Eye View", nullptr));
        chkRemoveGround->setText(QApplication::translate("MainWindow", "Remove Ground", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Surfel Map", nullptr));
        chkShowCurrentSurfels->setText(QApplication::translate("MainWindow", "Show Map", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "color", nullptr));
        cmbSurfelColor->setItemText(0, QApplication::translate("MainWindow", "Phong", nullptr));
        cmbSurfelColor->setItemText(1, QApplication::translate("MainWindow", "Normal Shade", nullptr));
        cmbSurfelColor->setItemText(2, QApplication::translate("MainWindow", "Normal Color", nullptr));
        cmbSurfelColor->setItemText(3, QApplication::translate("MainWindow", "Confidence", nullptr));
        cmbSurfelColor->setItemText(4, QApplication::translate("MainWindow", "Debug", nullptr));
        cmbSurfelColor->setItemText(5, QApplication::translate("MainWindow", "Semantic", nullptr));

        cmbSurfelDrawMode->setItemText(0, QApplication::translate("MainWindow", "Disks", nullptr));
        cmbSurfelDrawMode->setItemText(1, QApplication::translate("MainWindow", "Points", nullptr));

        label_33->setText(QApplication::translate("MainWindow", "mode", nullptr));
        chkShowNormalMap->setText(QApplication::translate("MainWindow", "Show normal map", nullptr));
        chkShowNormalMap3d->setText(QApplication::translate("MainWindow", "Show normal map (3d)", nullptr));
        chkShowVertexMap3d->setText(QApplication::translate("MainWindow", "Show vertex map (3d)", nullptr));
        chkFastMode->setText(QApplication::translate("MainWindow", "Fast mode", nullptr));
        chkShowGraphWidget->setText(QApplication::translate("MainWindow", "Show graph widget", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "GPU free", nullptr));
        btnRenderMaps->setText(QApplication::translate("MainWindow", "render maps", nullptr));
        btnRosNode->setText(QApplication::translate("MainWindow", "Rosnode", nullptr));
        chkShowSemanticMap->setText(QApplication::translate("MainWindow", "Show semantic map", nullptr));
        tabOptions->setTabText(tabOptions->indexOf(tab), QApplication::translate("MainWindow", "visual options", nullptr));
        label->setText(QApplication::translate("MainWindow", "point size", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "point cloud", nullptr));
        cmbPointColorMode->setItemText(0, QApplication::translate("MainWindow", "None", nullptr));
        cmbPointColorMode->setItemText(1, QApplication::translate("MainWindow", "Remission", nullptr));
        cmbPointColorMode->setItemText(2, QApplication::translate("MainWindow", "Depth", nullptr));

        groupBox->setTitle(QApplication::translate("MainWindow", "Depth image", nullptr));
        chkShowDepthImage->setText(QApplication::translate("MainWindow", "Show depth image", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "color", nullptr));
        cmbDepthColorMode->setItemText(0, QApplication::translate("MainWindow", "Intensity", nullptr));
        cmbDepthColorMode->setItemText(1, QApplication::translate("MainWindow", "HSV", nullptr));
        cmbDepthColorMode->setItemText(2, QApplication::translate("MainWindow", "Raw", nullptr));
        cmbDepthColorMode->setItemText(3, QApplication::translate("MainWindow", "Residual", nullptr));
        cmbDepthColorMode->setItemText(4, QApplication::translate("MainWindow", "Outlier", nullptr));
        cmbDepthColorMode->setItemText(5, QApplication::translate("MainWindow", "Weights", nullptr));
        cmbDepthColorMode->setItemText(6, QApplication::translate("MainWindow", "Cutoff", nullptr));
        cmbDepthColorMode->setItemText(7, QApplication::translate("MainWindow", "Height", nullptr));

        chkMarkInvalidDepthValues->setText(QApplication::translate("MainWindow", "mark invalid values", nullptr));
        tabOptions->setTabText(tabOptions->indexOf(tab_8), QApplication::translate("MainWindow", "additional", nullptr));
        chkBilateralFiltering->setText(QApplication::translate("MainWindow", "use bilateral filtering", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "sigma_space", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "sigma_range", nullptr));
        chkFilterVertices->setText(QApplication::translate("MainWindow", "filter vertices", nullptr));
        tabOptions->setTabText(tabOptions->indexOf(tab_7), QApplication::translate("MainWindow", "Filtering", nullptr));
        chkShowIcpEstimate->setText(QApplication::translate("MainWindow", "Apply ICP pose", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "ICP iteration", nullptr));
        btnIcpPlay->setText(QApplication::translate("MainWindow", "...", nullptr));
        btnIcpStep->setText(QApplication::translate("MainWindow", "...", nullptr));
        btnIcpReset->setText(QApplication::translate("MainWindow", "...", nullptr));
        lblIcpIteration->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Parameters", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "max iterations", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "max. dist(m)", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "max. angle(deg)", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "weighting", nullptr));
        cmbOptWeighting->setItemText(0, QApplication::translate("MainWindow", "none", nullptr));
        cmbOptWeighting->setItemText(1, QApplication::translate("MainWindow", "huber", nullptr));
        cmbOptWeighting->setItemText(2, QApplication::translate("MainWindow", "turkey", nullptr));

        label_29->setText(QApplication::translate("MainWindow", "factor", nullptr));
        chkWarmStart->setText(QApplication::translate("MainWindow", "warm start ICP", nullptr));
        chkShowOdomPoses->setText(QApplication::translate("MainWindow", "Show odometry poses", nullptr));
        tabOptions->setTabText(tabOptions->indexOf(tab_2), QApplication::translate("MainWindow", "ICP", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Additional Options", nullptr));
        chkShowSubmaps->setText(QApplication::translate("MainWindow", "Show submaps", nullptr));
        chkShowUpdatedSurfels->setText(QApplication::translate("MainWindow", "Show updated surfels", nullptr));
        chkShpowNewSurfels->setText(QApplication::translate("MainWindow", "Show new surfels", nullptr));
        chkBackfaceCulling->setText(QApplication::translate("MainWindow", "back face culling", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Parameter", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "confidence", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "max. distance", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "max. angle (deg)", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Surfel Stability", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "p_stable", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "p_prior", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Measurement Weighting", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "sigma_angle", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "sigma_distance", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "Weighting", nullptr));
        cmbWeightingScheme->setItemText(0, QApplication::translate("MainWindow", "exp", nullptr));
        cmbWeightingScheme->setItemText(1, QApplication::translate("MainWindow", "cum", nullptr));
        cmbWeightingScheme->setItemText(2, QApplication::translate("MainWindow", "cum (angle)", nullptr));

        label_36->setText(QApplication::translate("MainWindow", "Averaging", nullptr));
        cmbAveragingScheme->setItemText(0, QApplication::translate("MainWindow", "normal", nullptr));
        cmbAveragingScheme->setItemText(1, QApplication::translate("MainWindow", "surface", nullptr));

        chkUpdateAlways->setText(QApplication::translate("MainWindow", "update always", nullptr));
        tabOptions->setTabText(tabOptions->indexOf(tab_3), QApplication::translate("MainWindow", "Surfel map", nullptr));
        chkShowPosegraph->setText(QApplication::translate("MainWindow", "Show Posegraph", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Method", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Nearest Neighbors (2D)", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Feature-based Detection", nullptr));

        btnInitialize->setText(QApplication::translate("MainWindow", "Initialize", nullptr));
        btnOptimize->setText(QApplication::translate("MainWindow", "Optimize", nullptr));
        btnSavePosegraph->setText(QApplication::translate("MainWindow", "Save poses ...", nullptr));
        chkShowCandidates->setText(QApplication::translate("MainWindow", "show candidates", nullptr));
        chkShowLoopPoses->setText(QApplication::translate("MainWindow", "show poses", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "residual thres.", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "outlier thres.", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "valid thres.", nullptr));
        btnResidualPlot->setText(QApplication::translate("MainWindow", "residual plot", nullptr));
        tabOptions->setTabText(tabOptions->indexOf(widget), QApplication::translate("MainWindow", "Loop Closure", nullptr));
        btnPlay->setText(QApplication::translate("MainWindow", "play", nullptr));
        btnNext->setText(QApplication::translate("MainWindow", ">", nullptr));
        btnReset->setText(QApplication::translate("MainWindow", "|<", nullptr));
        txtScanNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZER_H
