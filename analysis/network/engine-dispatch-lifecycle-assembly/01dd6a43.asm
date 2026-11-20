 1dd6a43:	55                   	push   ebp
 1dd6a44:	8b ec                	mov    ebp,esp
 1dd6a46:	83 ec 14             	sub    esp,0x14
 1dd6a49:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd6a4e:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
 1dd6a51:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1dd6a54:	51                   	push   ecx
 1dd6a55:	e8 6d 69 00 00       	call   0x1ddd3c7
 1dd6a5a:	83 c4 04             	add    esp,0x4
 1dd6a5d:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
 1dd6a60:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
 1dd6a64:	74 66                	je     0x1dd6acc
 1dd6a66:	83 3d 1c c1 7f 02 00 	cmp    DWORD PTR ds:0x27fc11c,0x0
 1dd6a6d:	74 11                	je     0x1dd6a80
 1dd6a6f:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd6a75:	8b 82 9c 4b 00 00    	mov    eax,DWORD PTR [edx+0x4b9c]
 1dd6a7b:	3b 45 08             	cmp    eax,DWORD PTR [ebp+0x8]
 1dd6a7e:	74 4c                	je     0x1dd6acc
 1dd6a80:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
 1dd6a87:	8b 0d 24 f3 51 02    	mov    ecx,DWORD PTR ds:0x251f324
 1dd6a8d:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
 1dd6a90:	eb 14                	jmp    0x1dd6aa6
 1dd6a92:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
 1dd6a95:	83 c2 01             	add    edx,0x1
 1dd6a98:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
 1dd6a9b:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1dd6a9e:	05 18 50 00 00       	add    eax,0x5018
 1dd6aa3:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
 1dd6aa6:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
 1dd6aa9:	3b 0d 28 f3 51 02    	cmp    ecx,DWORD PTR ds:0x251f328
 1dd6aaf:	7d 1b                	jge    0x1dd6acc
 1dd6ab1:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
 1dd6ab4:	8b 82 9c 4b 00 00    	mov    eax,DWORD PTR [edx+0x4b9c]
 1dd6aba:	3b 45 08             	cmp    eax,DWORD PTR [ebp+0x8]
 1dd6abd:	75 0b                	jne    0x1dd6aca
 1dd6abf:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1dd6ac2:	89 0d 1c c1 7f 02    	mov    DWORD PTR ds:0x27fc11c,ecx
 1dd6ac8:	eb 02                	jmp    0x1dd6acc
 1dd6aca:	eb c6                	jmp    0x1dd6a92
 1dd6acc:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
 1dd6ad3:	8b 15 24 f3 51 02    	mov    edx,DWORD PTR ds:0x251f324
 1dd6ad9:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
 1dd6adc:	eb 15                	jmp    0x1dd6af3
 1dd6ade:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
 1dd6ae1:	83 c0 01             	add    eax,0x1
 1dd6ae4:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
 1dd6ae7:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1dd6aea:	81 c1 18 50 00 00    	add    ecx,0x5018
 1dd6af0:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
 1dd6af3:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
 1dd6af6:	3b 15 28 f3 51 02    	cmp    edx,DWORD PTR ds:0x251f328
 1dd6afc:	0f 8d 19 01 00 00    	jge    0x1dd6c1b
 1dd6b02:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1dd6b05:	83 38 00             	cmp    DWORD PTR [eax],0x0
 1dd6b08:	75 02                	jne    0x1dd6b0c
 1dd6b0a:	eb d2                	jmp    0x1dd6ade
 1dd6b0c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
 1dd6b0f:	81 e1 80 00 00 00    	and    ecx,0x80
 1dd6b15:	85 c9                	test   ecx,ecx
 1dd6b17:	74 0d                	je     0x1dd6b26
 1dd6b19:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
 1dd6b1c:	3b 15 1c c1 7f 02    	cmp    edx,DWORD PTR ds:0x27fc11c
 1dd6b22:	75 02                	jne    0x1dd6b26
 1dd6b24:	eb b8                	jmp    0x1dd6ade
 1dd6b26:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
 1dd6b2a:	74 74                	je     0x1dd6ba0
 1dd6b2c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1dd6b2f:	83 b8 c4 02 00 00 00 	cmp    DWORD PTR [eax+0x2c4],0x0
 1dd6b36:	74 68                	je     0x1dd6ba0
 1dd6b38:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1dd6b3b:	8b 91 9c 4b 00 00    	mov    edx,DWORD PTR [ecx+0x4b9c]
 1dd6b41:	83 ba c4 02 00 00 00 	cmp    DWORD PTR [edx+0x2c4],0x0
 1dd6b48:	74 56                	je     0x1dd6ba0
 1dd6b4a:	83 3d 10 f3 42 02 00 	cmp    DWORD PTR ds:0x242f310,0x0
 1dd6b51:	75 23                	jne    0x1dd6b76
 1dd6b53:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1dd6b56:	8b 88 9c 4b 00 00    	mov    ecx,DWORD PTR [eax+0x4b9c]
 1dd6b5c:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1dd6b5f:	8b 82 c4 02 00 00    	mov    eax,DWORD PTR [edx+0x2c4]
 1dd6b65:	23 81 c4 02 00 00    	and    eax,DWORD PTR [ecx+0x2c4]
 1dd6b6b:	85 c0                	test   eax,eax
 1dd6b6d:	75 05                	jne    0x1dd6b74
 1dd6b6f:	e9 6a ff ff ff       	jmp    0x1dd6ade
 1dd6b74:	eb 2a                	jmp    0x1dd6ba0
 1dd6b76:	83 3d 10 f3 42 02 01 	cmp    DWORD PTR ds:0x242f310,0x1
 1dd6b7d:	75 21                	jne    0x1dd6ba0
 1dd6b7f:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1dd6b82:	8b 91 9c 4b 00 00    	mov    edx,DWORD PTR [ecx+0x4b9c]
 1dd6b88:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1dd6b8b:	8b 88 c4 02 00 00    	mov    ecx,DWORD PTR [eax+0x2c4]
 1dd6b91:	23 8a c4 02 00 00    	and    ecx,DWORD PTR [edx+0x2c4]
 1dd6b97:	85 c9                	test   ecx,ecx
 1dd6b99:	74 05                	je     0x1dd6ba0
 1dd6b9b:	e9 3e ff ff ff       	jmp    0x1dd6ade
 1dd6ba0:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
 1dd6ba3:	52                   	push   edx
 1dd6ba4:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
 1dd6ba7:	50                   	push   eax
 1dd6ba8:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1dd6bab:	51                   	push   ecx
 1dd6bac:	e8 b9 fd ff ff       	call   0x1dd696a
 1dd6bb1:	83 c4 0c             	add    esp,0xc
 1dd6bb4:	85 c0                	test   eax,eax
 1dd6bb6:	74 4c                	je     0x1dd6c04
 1dd6bb8:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
 1dd6bbc:	74 0b                	je     0x1dd6bc9
 1dd6bbe:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
 1dd6bc1:	83 c2 7c             	add    edx,0x7c
 1dd6bc4:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
 1dd6bc7:	eb 0b                	jmp    0x1dd6bd4
 1dd6bc9:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1dd6bcc:	05 c0 25 00 00       	add    eax,0x25c0
 1dd6bd1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1dd6bd4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1dd6bd7:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd6bda:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
 1dd6bdd:	2b 42 10             	sub    eax,DWORD PTR [edx+0x10]
 1dd6be0:	3b 05 88 44 57 02    	cmp    eax,DWORD PTR ds:0x2574488
 1dd6be6:	7e 1a                	jle    0x1dd6c02
 1dd6be8:	8b 0d 88 44 57 02    	mov    ecx,DWORD PTR ds:0x2574488
 1dd6bee:	51                   	push   ecx
 1dd6bef:	8b 15 80 44 57 02    	mov    edx,DWORD PTR ds:0x2574480
 1dd6bf5:	52                   	push   edx
 1dd6bf6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1dd6bf9:	50                   	push   eax
 1dd6bfa:	e8 58 19 f7 ff       	call   0x1d48557
 1dd6bff:	83 c4 0c             	add    esp,0xc
 1dd6c02:	eb 12                	jmp    0x1dd6c16
 1dd6c04:	8b 0d a0 88 49 02    	mov    ecx,DWORD PTR ds:0x24988a0
 1dd6c0a:	03 0d 88 44 57 02    	add    ecx,DWORD PTR ds:0x2574488
 1dd6c10:	89 0d a0 88 49 02    	mov    DWORD PTR ds:0x24988a0,ecx
 1dd6c16:	e9 c3 fe ff ff       	jmp    0x1dd6ade
 1dd6c1b:	68 78 44 57 02       	push   0x2574478
 1dd6c20:	e8 a1 17 f7 ff       	call   0x1d483c6
 1dd6c25:	83 c4 04             	add    esp,0x4
 1dd6c28:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
 1dd6c2b:	89 15 1c c1 7f 02    	mov    DWORD PTR ds:0x27fc11c,edx
 1dd6c31:	8b e5                	mov    esp,ebp
 1dd6c33:	5d                   	pop    ebp
 1dd6c34:	c3                   	ret
