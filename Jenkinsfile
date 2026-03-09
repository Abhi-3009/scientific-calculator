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
    post {

        success {
            mail to: 'rai.codestack@gmail.com',
                 subject: "Jenkins SUCCESS: ${env.JOB_NAME} #${env.BUILD_NUMBER}",
                 body: """
Build completed successfully.

Job: ${env.JOB_NAME}
Build Number: ${env.BUILD_NUMBER}

Check details:
${env.BUILD_URL}
"""
        }

        failure {
            mail to: 'rai.codestack@gmail.com',
                 subject: "Jenkins FAILURE: ${env.JOB_NAME} #${env.BUILD_NUMBER}",
                 body: """
Build failed.

Job: ${env.JOB_NAME}
Build Number: ${env.BUILD_NUMBER}

Check logs:
${env.BUILD_URL}
"""
        }
    }
}
