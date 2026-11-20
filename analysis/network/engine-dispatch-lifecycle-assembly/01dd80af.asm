 1dd80af:	55                   	push   ebp
 1dd80b0:	8b ec                	mov    ebp,esp
 1dd80b2:	51                   	push   ecx
 1dd80b3:	83 3d a8 88 49 02 00 	cmp    DWORD PTR ds:0x24988a8,0x0
 1dd80ba:	0f 84 9f 00 00 00    	je     0x1dd815f
 1dd80c0:	a1 a8 88 49 02       	mov    eax,ds:0x24988a8
 1dd80c5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1dd80c8:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
 1dd80cc:	0f 84 8d 00 00 00    	je     0x1dd815f
 1dd80d2:	6a 27                	push   0x27
 1dd80d4:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd80d7:	51                   	push   ecx
 1dd80d8:	e8 82 ef f6 ff       	call   0x1d4705f
 1dd80dd:	83 c4 08             	add    esp,0x8
 1dd80e0:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd80e3:	8b 02                	mov    eax,DWORD PTR [edx]
 1dd80e5:	50                   	push   eax
 1dd80e6:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd80e9:	51                   	push   ecx
 1dd80ea:	e8 70 ef f6 ff       	call   0x1d4705f
 1dd80ef:	83 c4 08             	add    esp,0x8
 1dd80f2:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd80f5:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
 1dd80f8:	50                   	push   eax
 1dd80f9:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd80fc:	51                   	push   ecx
 1dd80fd:	e8 5d ef f6 ff       	call   0x1d4705f
 1dd8102:	83 c4 08             	add    esp,0x8
 1dd8105:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd8108:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
 1dd810b:	50                   	push   eax
 1dd810c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd810f:	51                   	push   ecx
 1dd8110:	e8 d6 ef f6 ff       	call   0x1d470eb
 1dd8115:	83 c4 08             	add    esp,0x8
 1dd8118:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd811b:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
 1dd811e:	50                   	push   eax
 1dd811f:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd8122:	51                   	push   ecx
 1dd8123:	e8 c3 ef f6 ff       	call   0x1d470eb
 1dd8128:	83 c4 08             	add    esp,0x8
 1dd812b:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd812e:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
 1dd8131:	50                   	push   eax
 1dd8132:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd8135:	51                   	push   ecx
 1dd8136:	e8 b0 ef f6 ff       	call   0x1d470eb
 1dd813b:	83 c4 08             	add    esp,0x8
 1dd813e:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd8141:	8b 42 14             	mov    eax,DWORD PTR [edx+0x14]
 1dd8144:	50                   	push   eax
 1dd8145:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd8148:	51                   	push   ecx
 1dd8149:	e8 9d ef f6 ff       	call   0x1d470eb
 1dd814e:	83 c4 08             	add    esp,0x8
 1dd8151:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1dd8154:	8b 42 18             	mov    eax,DWORD PTR [edx+0x18]
 1dd8157:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1dd815a:	e9 69 ff ff ff       	jmp    0x1dd80c8
 1dd815f:	8b e5                	mov    esp,ebp
 1dd8161:	5d                   	pop    ebp
 1dd8162:	c3                   	ret
