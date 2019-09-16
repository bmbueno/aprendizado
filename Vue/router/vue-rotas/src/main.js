import Vue from 'vue'
import VueRouter from 'vue-router'
import App from './App.vue'
import Formulario from './views/formulario1.vue'
import Login from './views/login.vue'

Vue.config.productionTip = false

Vue.use(VueRouter)

const router = new VueRouter({
    routes: [
        { path: '/formulario', component: Formulario },
        { path: '/', component: Login}
]
})

new Vue({
  router,
  render: h => h(App),
}).$mount('#app')
