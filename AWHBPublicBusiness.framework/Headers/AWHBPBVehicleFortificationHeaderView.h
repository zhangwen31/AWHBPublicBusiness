//
//  AWHBPBVehicleFortificationHeaderView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBPZSlider.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^QueryMileageHeadCellBlock)(NSString *titleLabText);
@interface AWHBPBVehicleFortificationHeaderView : UIView
@property(nonatomic,strong)UITableView *tableView;
@property (nonatomic, copy) NSString *plateName;
@property(nonatomic,strong)UILabel *sliderValueLab;
@property(nonatomic,strong)AWHBPBPZSlider * slider;
@property(nonatomic,strong)UIButton *startBtn;
@property (nonatomic, copy) QueryMileageHeadCellBlock QueryMileageHeadCellBlock;
@end

NS_ASSUME_NONNULL_END
