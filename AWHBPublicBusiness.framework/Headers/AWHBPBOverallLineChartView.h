//
//  AWHBPBOverallLineChartView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBOverallLineChartView : UITableViewHeaderFooterView
//标题名称
@property (nonatomic, strong) NSString *title;
//速度数组
@property (nonatomic, strong) NSArray<AWHBBCarModel *> *pathArray;
//速度阈值
@property (nonatomic, assign) CGFloat speedThreshold;
//历史详情
@property (nonatomic, strong) AWHBPBCountDataModel *countDataModel;
//选定的条目
@property (nonatomic, copy) void (^ChartViewChartValueSelected)(void);
///当用户停止在图表上的值之间平移时调用
@property (nonatomic, copy) void (^ChartViewChartViewDidEndPanning)(void);
//通过缩放手势缩放图表时回调。
@property (nonatomic, copy) void (^ChartViewChartScaled)(void);
//通过拖动手势移动/平移图表时回调。
@property (nonatomic, copy) void (^ChartViewChartTranslated)(void);

@end

NS_ASSUME_NONNULL_END
