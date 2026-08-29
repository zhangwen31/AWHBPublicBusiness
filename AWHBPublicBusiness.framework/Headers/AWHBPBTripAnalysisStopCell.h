//
//  AWHBPBTripAnalysisStopCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/5/11.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBTripAnalysisModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTripAnalysisStopCell : UITableViewCell

@property (nonatomic, strong) AWHBPBTripAnalysisModel *model;

/// 是否是总览
@property (nonatomic, assign) BOOL isOverview;

@property (nonatomic, strong) UIView *lineView;

@property (nonatomic, strong) UIView *line2View;

@property (nonatomic, copy) void (^addressClick)(AWHBPBTripAnalysisModel *model);

@end

NS_ASSUME_NONNULL_END
