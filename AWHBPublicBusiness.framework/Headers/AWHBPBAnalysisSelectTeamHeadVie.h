//
//  AWHBPBAnalysisSelectTeamHeadVie.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/1/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBAnalysisBackBlock)(void);
typedef void(^AWHBPBAnalysisRootBlock)(void);
@interface AWHBPBAnalysisSelectTeamHeadVie : UIView
@property(nonatomic,copy)AWHBPBAnalysisBackBlock backBlock;
@property(nonatomic,copy)AWHBPBAnalysisRootBlock rootBlock;
@property(nonatomic,strong)UILabel *label1;

@end

NS_ASSUME_NONNULL_END
