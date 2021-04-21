import { h,  } from "vue"

export default {
    name:'TextView',
    data(){
        return{
            content:'this is text',
        }
    },

    props:[
          'message'
    ],
    render (){
        return h('div',this.content)
    }
}