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

@interface AWHBPBOverallLineChartView : UIView
//标题名称
@property (nonatomic, strong) NSString *title;
//速度数组
@property (nonatomic, strong) NSArray<AWHBBCarModel *> *pathArray;
//速度阈值
@property (nonatomic, assign) CGFloat speedThreshold;
//历史详情
@property (nonatomic, strong) AWHBPBCountDataModel *countDataModel;
@end

NS_ASSUME_NONNULL_END
