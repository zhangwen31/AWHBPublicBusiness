//
//  AWHBPBHumidityDetailsCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/5/5.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSTemperatureHumidityDetailsModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBHumidityDetailsCell : UITableViewCell

///定位时间
@property (nonatomic, strong) UILabel *timeLabel;

///里程
@property (nonatomic, strong) UILabel *mileageLabel;

- (void)setupData:(NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *)typeArr detailsModel:(AWHSSTemperatureHumidityDetailsModel *)detailsModel;

@end

NS_ASSUME_NONNULL_END
