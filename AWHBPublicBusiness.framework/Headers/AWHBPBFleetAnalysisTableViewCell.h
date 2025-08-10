//
//  AWHBPBFleetAnalysisTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/1/4.
//

#import <UIKit/UIKit.h>
#import "AWHBPBTeamNewModel.h"
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBFleetAnalysisSelectsTeamBlock)(AWHBPBTeamNewModel *model);
@interface AWHBPBFleetAnalysisTableViewCell : UITableViewCell
@property(nonatomic,strong)AWHBPBTeamNewModel *model;
@property(nonatomic,strong)AWHBBCarModel *carModel;
@property(nonatomic,strong)UIView *showView;
@property(nonatomic,strong)UIImageView *carImageView;
@property(nonatomic,strong)UILabel *teamNameLab;
@property(nonatomic,strong)UILabel *numLab;
@property(nonatomic,strong)UILabel *onlineNumLab;
@property(nonatomic,strong)UILabel *offlineNumLab;
@property(nonatomic,strong)UIButton *chooseBtn;
/// 是否没有权限
@property(nonatomic,assign)BOOL noAuth;
@property(nonatomic,copy)AWHBPBFleetAnalysisSelectsTeamBlock SelectsTeamBlock;

@end

NS_ASSUME_NONNULL_END
