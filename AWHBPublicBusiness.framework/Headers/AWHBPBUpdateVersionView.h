//
//  AWHBPBUpdateVersionView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/3/1.
//

#import <UIKit/UIKit.h>

typedef void(^AWHBPBUpdateVersionBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBUpdateVersionView : UIView

@property(nonatomic,strong)UILabel *versionLab;
@property(nonatomic,strong)NSString *contentText;
@property(nonatomic,copy)AWHBPBUpdateVersionBlock UpdateVersionBlock;
@property(nonatomic,copy)void (^closeClick)(void);
@end

NS_ASSUME_NONNULL_END
