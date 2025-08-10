//
//  AWHBPBSelectTerminalViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/4.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBSelectTerminalModel.h>

@protocol AWHBPBSelectTerminalDelegate <NSObject>

- (void)selectTerminalWithModel:(AWHBPBSelectTerminalModel *_Nullable)model;

@end

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectTerminalViewController : AWHBBBaseViewController

@property (nonatomic, strong) NSString *teamId;

@property(nonatomic,strong) NSMutableArray *dataArray;

@property(nonatomic,weak) id<AWHBPBSelectTerminalDelegate>delegate;

@end

NS_ASSUME_NONNULL_END
