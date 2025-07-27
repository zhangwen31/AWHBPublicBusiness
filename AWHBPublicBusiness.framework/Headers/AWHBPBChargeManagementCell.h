//
//  AWHBPBChargeManagementCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBChargeManagementCell : UITableViewCell

@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property (nonatomic, assign) BOOL isShowRightImage;

@end

NS_ASSUME_NONNULL_END
