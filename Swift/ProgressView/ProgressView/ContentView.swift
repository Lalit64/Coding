//
//  ContentView.swift
//  ProgressView
//
//  Created by Lalit Yalamanchili on 2021/03/23.
//

import SwiftUI

struct ContentView: View {
    
    @State private var downloaded: CGFloat = 0
    
    private func startDownload(){
        let timer = Timer(timeInterval: 0.1, repeats: true) { (timer) in
            self.downloaded += 2
        }
    }
    
    var body: some View {
        Text("Hello, world!")
            .padding()
        VStack {
            VStack {
                ProgressView()
                
                Button("Download") {
                    self.startDownload()
                }
            }
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
