#ifndef PUBLISH_H
#define PUBLISH_H

#include <QWidget>

namespace Ui {
class Publish;
}

class Publish : public QWidget
{
    Q_OBJECT

public:
    explicit Publish(QWidget *parent = nullptr);
    ~Publish();
    void paintEvent(QPaintEvent *);
signals:
    void toChat();//返回聊天界面，可改

public slots:

private:
    Ui::Publish *ui;
};

#endif // PUBLISH_H
