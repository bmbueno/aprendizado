<template>
  <div id="app">
      <div>
          <h1>Vue Router</h1>
          <p> Testando </p>
      </div>
      <div class="container">

          <router-link to='/'> Login </router-link>
          <router-link to='/formulario'> Formulario </router-link>
          <router-view></router-view>

      </div>
  </div>
</template>
