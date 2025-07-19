//
//  AWHBPBMonitorListTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMonitorListTableViewCell : UITableViewCell

@property(nonatomic,strong)UIImageView *pzImageView;
@property(nonatomic,strong)UILabel *plateLabel;
@property(nonatomic,strong)AWHBBCarModel *model;

@end

NS_ASSUME_NONNULL_END
