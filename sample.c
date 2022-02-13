{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled0.ipynb",
      "provenance": [],
      "authorship_tag": "ABX9TyNlKTX45YIy4GofLEHM9ias",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/rkadam61001/6Companies30days-/blob/main/sample.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 1,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "lbYXwpMdvfPO",
        "outputId": "140b62bd-7417-4894-e3a1-4425ae967195"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing sample.c\n"
          ]
        }
      ],
      "source": [
        "%%writefile sample.c\n",
        "//Initial code to make binary files\n",
        "#include<stdio.h>\n",
        "#include<stdlib.h>\n",
        "void main()\n",
        "{\n",
        "    FILE *input;\n",
        "    if((input = fopen(\"/content/input.dat\",\"ab+\")) == NULL)\n",
        "    {\n",
        "        printf(\"Error! opening input file\");\n",
        "        exit(1);\n",
        "    }\n",
        "    float A[20][20]= {0};\n",
        "    float B[20]= {0};\n",
        "    int i,j,n;\n",
        "    printf(\"Enter the order of square matrix: \");\n",
        "    scanf(\"%d\",&n);\n",
        "    printf(\"\\nEnter matrix element:\\n\");\n",
        "    for(i=0; i<n; i++)\n",
        "    {\n",
        "        for(j=0; j<n; j++)\n",
        "        {\n",
        "            printf(\"Enter A[%d][%d] element: \", i,j);\n",
        "            scanf(\"%f\",&A[i][j]);\n",
        "            fwrite(&A[i][j],sizeof(A[i][j]),1,input);\n",
        "        }\n",
        "    }\n",
        "    printf(\"\\nEnter the constant terms: \\n\");\n",
        "    for(i=0; i<n; i++)\n",
        "    {\n",
        "        printf(\"B[%d]: \",i);\n",
        "        scanf(\"%f\",&B[i]);\n",
        "        fwrite(&B[i],sizeof(B[i]),1,input);\n",
        "    }\n",
        "    fclose(input);\n",
        "}"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%shell\n",
        "gcc sample.c -o sampleProgram\n",
        "./sampleProgram"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Uhf2Jlg5w_xP",
        "outputId": "c54a0b64-f80c-42e5-8795-246093d290aa"
      },
      "execution_count": 2,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter the order of square matrix: 3\n",
            "\n",
            "Enter matrix element:\n",
            "Enter A[0][0] element: 2\n",
            "Enter A[0][1] element: 3\n",
            "Enter A[0][2] element: 14\n",
            "Enter A[1][0] element: 45\n",
            "Enter A[1][1] element: 78\n",
            "Enter A[1][2] element: 4\n",
            "Enter A[2][0] element: 7\n",
            "Enter A[2][1] element: 8\n",
            "Enter A[2][2] element: 10\n",
            "\n",
            "Enter the constant terms: \n",
            "B[0]: 1\n",
            "B[1]: 2\n",
            "B[2]: 3\n"
          ]
        },
        {
          "output_type": "execute_result",
          "data": {
            "text/plain": [
              ""
            ]
          },
          "metadata": {},
          "execution_count": 2
        }
      ]
    }
  ]
}