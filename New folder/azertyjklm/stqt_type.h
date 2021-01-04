#ifndef STQT_TYPE_H
#define STQT_TYPE_H

#include <QDialog>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class stqt_type;
}

class stqt_type : public QDialog
{
    Q_OBJECT

public:
    explicit stqt_type(QWidget *parent = nullptr);
    ~stqt_type();


    QChartView *chartView ;

    void pie();


private:
    Ui::stqt_type *ui;
};

#endif // STQT_TYPE_H
