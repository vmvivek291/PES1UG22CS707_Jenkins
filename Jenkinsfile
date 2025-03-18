pipeline {
  agent any
  
  stages {
    stage('Build'){
      steps{
        build 'PES1UG22CS707-1'
        sh 'g++ -o PES1UG22CS707-1 sample.cpp'
        echo "Build Successful"
      }
    }
    
    stage('Test'){
      steps{
        sh './PES1UG22CS707-1'
        echo "Test Successful"
      }
    }
    
    stage('Deploy'){
      steps{
        e "Deployment Successful"
      }
    }
  }
  
  post{
    failure{
      echo "Pipeline Failed"
    }
  }
}
   
