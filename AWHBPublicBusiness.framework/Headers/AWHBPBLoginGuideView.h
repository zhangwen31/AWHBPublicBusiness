//
//  AWHBPBLoginGuideView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBLoginGuideView : UIView

@property (nonatomic, strong) NSArray *imageNameArr;

@property (nonatomic, copy) void (^MySeeClick)(void);

@end

NS_ASSUME_NONNULL_END
