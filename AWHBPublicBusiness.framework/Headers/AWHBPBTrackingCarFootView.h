//
//  AWHBPBTrackingCarFootView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^QueryMileageHeadCellBlock)(NSString *titleLabText);
@interface AWHBPBTrackingCarFootView : UIView
@property(nonatomic,strong)UITableView *tableView;
@property (nonatomic, copy) NSString *plateName;
@property (nonatomic, assign) BOOL HasAlready;
@property(nonatomic,assign) BOOL canNoSelectCar;
@property (nonatomic, copy) QueryMileageHeadCellBlock QueryMileageHeadCellBlock;
@end

NS_ASSUME_NONNULL_END
