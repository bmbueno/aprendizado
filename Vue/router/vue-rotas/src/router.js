import Vue from 'vue'
import VueRouter from 'vue-router'

import Formulario from './views/formulario1.vue'
import Login from './views/login.vue'

Vue.use(VueRouter)

export default new VueRouter({
    mode: 'history',
    routes: [
        { path: '/formulario', component: Formulario },
        { path: '/', component: Login}
]
})
