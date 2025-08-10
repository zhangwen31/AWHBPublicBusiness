//
//  AWHBPBHistoryStopCarDetailsView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/1.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBStopDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBHistoryStopCarDetailsView : UIView

@property(nonatomic,assign)NSInteger num;
@property(nonatomic,assign)BOOL isShowVideo;

@property(nonatomic,strong)AWHBPBStopDataModel *model;

@property(nonatomic,copy) void (^videoClickBlock)(AWHBPBStopDataModel *model);

- (CGFloat)getHeight;

@end

NS_ASSUME_NONNULL_END
