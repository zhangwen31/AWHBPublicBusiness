//
//  AWHBPBSelectTeamHeadView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBBackBlock)(void);
typedef void(^AWHBPBRootBlock)(void);
@interface AWHBPBSelectTeamHeadView : UIView
@property(nonatomic,copy)AWHBPBBackBlock backBlock;
@property(nonatomic,copy)AWHBPBRootBlock rootBlock;
@property(nonatomic,strong)UILabel *label1;
@end

NS_ASSUME_NONNULL_END
