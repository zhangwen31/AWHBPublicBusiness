//
//  AWHBPBSelectAreaListView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/23.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectAreaListView : UIView

@property (nonatomic, strong) NSMutableArray *dataArr;

@property(nonatomic,copy) void (^topUpButClick)(BOOL isTop);

@property (nonatomic, copy) void (^DeleteContentBlock)(AWHBPBCustomDataModel *model);

- (void)resetting;

@end

NS_ASSUME_NONNULL_END
