//
//  AWHBPBMenuModeView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMenuModeView : UIView

@property(nonatomic,strong)UIImage *image;
@property(nonatomic,strong)UIImage *selectImage;
@property(nonatomic,strong)NSString *title;
@property(nonatomic,assign)BOOL isSelected;;
@property(nonatomic,copy) void (^onClick)(void);

@end

NS_ASSUME_NONNULL_END
