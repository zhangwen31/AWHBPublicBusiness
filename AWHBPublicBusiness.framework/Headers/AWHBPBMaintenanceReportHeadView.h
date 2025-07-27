//
//  AWHBPBMaintenanceReportHeadView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBMRReturnClickTitle)(NSString *title);
@interface AWHBPBMaintenanceReportHeadView : UIView
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSMutableArray *titleArr;
@property(nonatomic,strong)NSMutableArray *detailArr;
@property(nonatomic,strong)NSArray *canNoShowRightArr; //不显示右边箭头
@property(nonatomic,copy)NSString *fromVC;
@property(nonatomic,copy)NSString *userOperationStr1;
@property(nonatomic,copy)NSString *userOperationStr2;
@property(nonatomic,copy)NSString *userOperationStr3;
@property(nonatomic,copy)AWHBPBMRReturnClickTitle ReturnClickTitle;
@end

NS_ASSUME_NONNULL_END
