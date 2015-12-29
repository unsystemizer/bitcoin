#ifndef DECISIONCREATIONWIDGET_H
#define DECISIONCREATIONWIDGET_H

#include <QWidget>

class marketBranch;
class marketDecision;

namespace Ui {
class DecisionCreationWidget;
}

class DecisionCreationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DecisionCreationWidget(QWidget *parent = 0);
    ~DecisionCreationWidget();

private slots:
    void on_pushButtonCreateDecision_clicked();

    void on_radioButtonBinary_clicked(bool checked);

    void on_radioButtonScaled_clicked(bool checked);

private:
    Ui::DecisionCreationWidget *ui;
    const marketBranch *branch;
};

#endif // DECISIONCREATIONWIDGET_H
