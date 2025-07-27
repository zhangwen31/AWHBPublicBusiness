//
//  AWHBPBHumidityDetailsHeaderFooterView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/5/5.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBHumidityDetailsHeaderFooterView : UITableViewHeaderFooterView

///定位时间
@property (nonatomic, strong) UILabel *timeLabel;

///里程
@property (nonatomic, strong) UILabel *mileageLabel;

@property (nonatomic, strong) NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;

@end

NS_ASSUME_NONNULL_END
