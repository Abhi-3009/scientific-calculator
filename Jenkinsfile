pipeline {
    agent any
    stages {

        stage('Clone Repository') {
            steps {
                git branch: 'main', url: 'https://github.com/Abhi-3009/scientific-calculator'
            }
        }

        stage('Build') {
            steps {
                sh 'make build'
            }
        }

        stage('Run Tests') {
            steps {
                sh 'make test'
            }
        }

        stage('Build Docker Image') {
            steps {
                sh 'docker build -t codestack123/calculator:latest .'
            }
        }

        stage('Push Docker Image') {
            steps {
                sh 'docker push codestack123/calculator:latest'
            }
        }

        stage('Deploy with Ansible') {
            steps {
                sh 'ansible-playbook deploy.yml -i inventory.ini'
            }
        }
    }
}
