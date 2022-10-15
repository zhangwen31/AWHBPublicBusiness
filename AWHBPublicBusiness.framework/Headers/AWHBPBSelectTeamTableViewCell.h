//
//  AWHBPBSelectTeamTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>
#import "AWHBPBTeamModel.h"
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectsTeamBlock)(NSString *string ,NSString *teamName);
@interface AWHBPBSelectTeamTableViewCell : UITableViewCell
@property(nonatomic,strong)AWHBPBTeamModel *model;
@property(nonatomic,strong)AWHBBCarModel *carModel;
@property(nonatomic,strong)UIView *showView;
@property(nonatomic,strong)UIImageView *carImageView;
@property(nonatomic,strong)UILabel *teamNameLab;
@property(nonatomic,strong)UILabel *numLab;
@property(nonatomic,strong)UIButton *chooseBtn;
//是否是单个选择车辆
@property(nonatomic,assign)BOOL isSingle;
@property(nonatomic,copy)AWHBPBSelectsTeamBlock SelectsTeamBlock;
@end

NS_ASSUME_NONNULL_END
