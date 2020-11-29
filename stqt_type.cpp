#include "stqt_type.h"
#include "ui_stqt_type.h"

stqt_type::stqt_type(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stqt_type)
{
    ui->setupUi(this);
}

stqt_type::~stqt_type()
{
    delete ui;
}

//pie chart
    void stqt_type::pie()
    {
    QSqlQuery q1,q2,q3;
    qreal tot=0,c1=0,c2=0,c3=0;

    q1.prepare("SELECT * FROM CLIENT");
    q1.exec();

    q2.prepare("SELECT * FROM CLIENT WHERE TFETE='marriage'");
    q2.exec();

    q3.prepare("SELECT * FROM CLIENT WHERE TFETE='anniversaire'");
    q3.exec();


    while (q1.next()){tot++;}
    while (q2.next()){c1++;}
    while (q3.next()){c2++;}
    c3=tot-c1-c2;

    c1=c1/tot;
    c2=c2/tot;
    c3=c3/tot;

    // Define slices and percentage of whole they take up
    QPieSeries *series = new QPieSeries();
    series->append("marriage",c1);
    series->append("anniversaire",c2);
    series->append("autre",c3);




    // Create the chart widget
    QChart *chart = new QChart();

    // Add data to chart with title and show legend
    chart->addSeries(series);
    chart->legend()->show();


    // Used to display the chart
    chartView = new QChartView(chart,ui->label);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumSize(400,400);

    chartView->show();
    }

