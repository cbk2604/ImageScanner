//
//  ViewController.swift
//  ImageClearScanner
//
//  Created by Bharghav on 05/12/18.
//  Copyright © 2018 SSS. All rights reserved.
//

import UIKit

class ViewController: UIViewController, ICSCropDelegate {
    
    @IBOutlet weak var sourceImageView: UIImageView!

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    func detectEdges() {
        
    }
    
    @IBAction func cropButtonClicked(_ sender: UIBarButtonItem) {
        let vc = ICSCropViewController()
        vc.cropdelegate = self
        let nc = UINavigationController(rootViewController: vc)
        vc.adjustedImage = sourceImageView.image!
        self.present(nc , animated: true) {
            //TODO
        }
    }

    func didFinishCropping(_ finalCropImage: UIImage, from cropObj: ICSCropViewController) {
        sourceImageView.image = finalCropImage
        self.dismiss(animated: true) {
            //TODO
        }
    }
}

