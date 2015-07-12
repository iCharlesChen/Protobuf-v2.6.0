//
//  ViewController.m
//  Protobuf-v2.6.0
//
//  Created by Charles on 15/7/12.
//  Copyright (c) 2015年 czyhome. All rights reserved.
//

#import "ViewController.h"
#import "OCProtobufMaganer.h"
#import "OCMessageValue.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UILabel *json1MTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *json10MTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *json1MSizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *json10MSizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoStatic1MTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoStatic10MTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoStatic1MSizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoStatic10MSizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoDynamic1MTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoDynamic10MTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoDynamic1MSizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *protoDynamic10MSizeLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    OCProtobufMaganer *protoMgr = [OCProtobufMaganer defaultProtobufMaganer];
    if (![protoMgr initializeWithRootPath:[[NSBundle mainBundle] bundlePath]]) {
        return;
    }
    
    if (![protoMgr importerWithProto:@"test.proto"]) {
        return;
    }
    
    NSMutableDictionary *msgDictIn = [NSMutableDictionary dictionary];
    [msgDictIn setObject:[[MVInt32 alloc]initWithValue:100] forKey:@"int32_value"];
    [msgDictIn setObject:@"101" forKey:@"string_value"];
    
    NSString *msgString = [protoMgr serializeToStringWithMsgName:@"test" msgDict:msgDictIn];
    if (msgString.length <= 0) {
        return;
    }
    
    NSDictionary *msgDictOut = [protoMgr ParseToMessageDictWithMsgName:@"test" msgString:msgString];
    if (msgDictOut.count <= 0) {
        return;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)onJsonStartAction:(id)sender {
}

- (IBAction)onProtoStaticStartAction:(id)sender {
}

- (IBAction)onProtoDynamicStartAction:(id)sender {
}

@end