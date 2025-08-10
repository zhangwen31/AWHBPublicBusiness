//
//  AWHBPBTemperatureDetailsHeaderFooterView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTemperatureDetailsHeaderFooterView : UITableViewHeaderFooterView

///时间
@property (nonatomic, strong) UILabel *timeLabel;
///副温度
@property (nonatomic, strong) UILabel *subTemperatureLabel;
///温度
@property (nonatomic, strong) UILabel *temperatureLabel;
/// 是否只展示一列数据  如展示温度，不展示副温度
@property (nonatomic, assign) BOOL isShowOneTitle;

@end

NS_ASSUME_NONNULL_END
