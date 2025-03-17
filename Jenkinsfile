pipeline {
  agent any
  
  stages {
    stage('Build'){
      steps{
        sh 'g++ -o PES1UG22CS707-1 sample.cpp'
        e "Build Successful"
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
        echo "Deployment Successful"
      }
    }
  }
  
  post{
    failure{
      echo "Pipeline Failed"
    }
  }
}
   
