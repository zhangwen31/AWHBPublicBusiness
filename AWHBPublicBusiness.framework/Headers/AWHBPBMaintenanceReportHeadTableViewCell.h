//
//  AWHBPBMaintenanceReportHeadTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/17.
//

#import <UIKit/UIKit.h>
#import <AWHBoneRuntime/AWHBRTextView.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMaintenanceReportHeadTableViewCell : UITableViewCell
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)AWHBRTextView *detailText;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIImageView *pImageView;
@property (nonatomic, assign) BOOL isHiddenLine;
/**
 是否放大
 */
@property (nonatomic, assign) BOOL isEnlarge;

@end

NS_ASSUME_NONNULL_END
