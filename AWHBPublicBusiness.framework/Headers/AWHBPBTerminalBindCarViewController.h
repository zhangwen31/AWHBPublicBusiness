//
//  AWHBPBTerminalBindCarViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/17.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBTerminalBindCarModel.h>

@protocol AWHBPBTerminalBindCarDelegate <NSObject>

- (void)bindTerminalWithModel:(AWHBPBTerminalBindCarModel *_Nullable)model;

@end

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBTerminalBindCarViewController : AWHBBBaseViewController

@property (nonatomic, strong) NSString *teamId;

@property (nonatomic, strong) NSString *teamName;

@property (nonatomic, strong) NSString *tmnId;

@property(nonatomic,weak) id<AWHBPBTerminalBindCarDelegate>delegate;

@end

NS_ASSUME_NONNULL_END
