//
//  AWHBPBCustomCalloutView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnBtnTitleBlock)(NSString *title);
@interface AWHBPBCustomCalloutView : UIView
@property(nonatomic,copy)AWHBBCarModel *model;
@property(nonatomic,copy)NSString *drvPhone;
@property(nonatomic,copy)NSString *acc;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *teamName;
@property(nonatomic,copy)NSString *carName;
@property(nonatomic,copy)NSString *simCard;
@property(nonatomic,copy)NSString *tmnNo;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *drvName;
@property(nonatomic,copy)NSString *stateCn;
@property(nonatomic,copy)NSString *sgn;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *preMile;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *carID;
@property(nonatomic,copy)NSString *plateColor;
@property(nonatomic,copy)NSString *bigIconLink;
@property(nonatomic,copy)NSString *moni1;
@property(nonatomic,copy)NSString *moni2;
//油量 载重  温度 湿度  水位  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *sts;
@property(nonatomic,strong)NSArray *stsName;
@property(nonatomic,strong)NSArray *stsValue;

@property (strong,nonatomic)UILabel *accL;
@property (strong,nonatomic)UILabel *drvPhoneL;
@property (strong,nonatomic)UILabel *teamNameL;
@property (strong,nonatomic)UILabel *carNameL;
@property (strong,nonatomic)UILabel *simCardL;
@property (strong,nonatomic)UILabel *tmnNoL;
@property (strong,nonatomic)UILabel *timeL;
@property (strong,nonatomic)UILabel *drvNameL;
@property (strong,nonatomic)UILabel *sgnL;
@property (strong,nonatomic)UILabel *addrL;
@property (strong,nonatomic)UILabel *speedL;
@property (strong,nonatomic)UILabel *mileL;
@property (strong,nonatomic)UILabel *preMileL;
@property (strong,nonatomic)UILabel *moni1L;
@property (strong,nonatomic)UILabel *moni2L;
@property(nonatomic,strong)UIButton *closeButton;
@property(nonatomic,strong)UIButton *refreshButton;
@property(nonatomic,strong)UIButton *refreshButton2;
@property(nonatomic,strong)UIButton *btn1;
@property(nonatomic,strong)UIButton *btn2;
@property(nonatomic,strong)UIButton *btn3;
@property(nonatomic,strong)UIButton *btn4;
@property(nonatomic,strong)UIButton *btn5;
@property(nonatomic,strong)UIButton *btn6;

@property(nonatomic,strong)UIImageView *carImage;
@property(nonatomic,strong)UIImageView *arrearageImage;
@property(nonatomic,strong)UILabel *colorLabel;
@property(nonatomic,strong)UILabel *phoneLabel;
@property(nonatomic,strong)NSMutableArray *showLabArr;
@property(nonatomic,assign)BOOL showBtn;

@property(nonatomic,copy)ReturnBtnTitleBlock ReturnBtnTitleBlock;
@end

NS_ASSUME_NONNULL_END
