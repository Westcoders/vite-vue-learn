import { createApp } from 'vue'
import App from './App.vue'
createApp(App).mount('#app')
/*Vue.createApp({
    data() {
      return {
        checkedNames: [],
        counter1: 0,
        ture:[true],
        counter2: 0,
        ccc:'',
      }
    },
     methods:{
        abc(){
            if (this.counter2 % 2 == 0) {
                this.ture = true
                this.ccc = 'checked = "<input type="checkbox" checked="ture" id="one" class="" value="1" v-model="checkedNames">" '
            }
        }
    }

  }).mount('#aaa')
/*
.js内容学习笔记
一. 创建组件
1. const RootComponent = { 应用的功能 }:写算法；
2. const app = Vue.createApp(RootComponent)：登记某个应用到"app"（自定义名字）中；
3. const vm = app.mount('#app'):将app这个应用挂载在ID为“app”中，便于与dom使用，???其中vm作用未知???；
4. 1与2可合并使用：const app = vue.createApp({应用的功能})，随后直接挂载；
二.模板
1.*/