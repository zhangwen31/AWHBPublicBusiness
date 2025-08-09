//
//  AWHBPBOverallView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBOverallView : UIView
@property(nonatomic,strong)AWHBPBCountDataModel *model;
@property(nonatomic,strong)NSArray *pathArray;
@property(nonatomic,copy)NSString *startAddr;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *endAddr;
//速度阈值
@property (nonatomic, assign) CGFloat speedThreshold;
@end

NS_ASSUME_NONNULL_END
