100ae850:	55                   	push   ebp
100ae851:	8b ec                	mov    ebp,esp
100ae853:	83 ec 08             	sub    esp,0x8
100ae856:	8d 45 08             	lea    eax,[ebp+0x8]
100ae859:	50                   	push   eax
100ae85a:	e8 b1 5c fe ff       	call   0x10094510
100ae85f:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
100ae862:	f2 0f 10 45 f8       	movsd  xmm0,QWORD PTR [ebp-0x8]
100ae867:	83 c4 04             	add    esp,0x4
100ae86a:	66 0f 2f 05 30 ee 13 	comisd xmm0,QWORD PTR ds:0x1013ee30
100ae871:	10 
100ae872:	77 23                	ja     0x100ae897
100ae874:	68 20 96 55 10       	push   0x10559620
100ae879:	e8 92 5c fe ff       	call   0x10094510
100ae87e:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
100ae881:	f2 0f 10 45 f8       	movsd  xmm0,QWORD PTR [ebp-0x8]
100ae886:	83 c4 04             	add    esp,0x4
100ae889:	66 0f 2f 05 30 ee 13 	comisd xmm0,QWORD PTR ds:0x1013ee30
100ae890:	10 
100ae891:	0f 86 ff 00 00 00    	jbe    0x100ae996
100ae897:	56                   	push   esi
100ae898:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
100ae89b:	8d 45 08             	lea    eax,[ebp+0x8]
100ae89e:	50                   	push   eax
100ae89f:	68 20 96 55 10       	push   0x10559620
100ae8a4:	51                   	push   ecx
100ae8a5:	f3 0f 10 46 3c       	movss  xmm0,DWORD PTR [esi+0x3c]
100ae8aa:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ae8af:	50                   	push   eax
100ae8b0:	e8 bb 5e fe ff       	call   0x10094770
100ae8b5:	f3 0f 10 46 3c       	movss  xmm0,DWORD PTR [esi+0x3c]
100ae8ba:	83 c4 10             	add    esp,0x10
100ae8bd:	f3 0f 59 05 24 ef 13 	mulss  xmm0,DWORD PTR ds:0x1013ef24
100ae8c4:	10 
100ae8c5:	f3 0f 10 0d f0 cc 13 	movss  xmm1,DWORD PTR ds:0x1013ccf0
100ae8cc:	10 
100ae8cd:	68 20 96 55 10       	push   0x10559620
100ae8d2:	f3 0f 5c c8          	subss  xmm1,xmm0
100ae8d6:	0f 57 c0             	xorps  xmm0,xmm0
100ae8d9:	51                   	push   ecx
100ae8da:	f3 0f 5f c1          	maxss  xmm0,xmm1
100ae8de:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ae8e3:	68 20 96 55 10       	push   0x10559620
100ae8e8:	e8 93 5f fe ff       	call   0x10094880
100ae8ed:	f3 0f 10 46 3c       	movss  xmm0,DWORD PTR [esi+0x3c]
100ae8f2:	8d 45 08             	lea    eax,[ebp+0x8]
100ae8f5:	f3 0f 59 05 50 ef 13 	mulss  xmm0,DWORD PTR ds:0x1013ef50
100ae8fc:	10 
100ae8fd:	0f 57 c9             	xorps  xmm1,xmm1
100ae900:	83 c4 0c             	add    esp,0xc
100ae903:	f3 0f 5f c8          	maxss  xmm1,xmm0
100ae907:	f3 0f 10 05 e0 e3 13 	movss  xmm0,DWORD PTR ds:0x1013e3e0
100ae90e:	10 
100ae90f:	68 20 96 55 10       	push   0x10559620
100ae914:	50                   	push   eax
100ae915:	51                   	push   ecx
100ae916:	f3 0f 5d c1          	minss  xmm0,xmm1
100ae91a:	0f 57 05 30 e4 13 10 	xorps  xmm0,XMMWORD PTR ds:0x1013e430
100ae921:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ae926:	68 20 96 55 10       	push   0x10559620
100ae92b:	e8 40 5e fe ff       	call   0x10094770
100ae930:	f3 0f 10 1d b4 ef 13 	movss  xmm3,DWORD PTR ds:0x1013efb4
100ae937:	10 
100ae938:	83 c4 10             	add    esp,0x10
100ae93b:	f3 0f 10 15 60 ef 13 	movss  xmm2,DWORD PTR ds:0x1013ef60
100ae942:	10 
100ae943:	0f 28 cb             	movaps xmm1,xmm3
100ae946:	f3 0f 5f 0d b4 95 55 	maxss  xmm1,DWORD PTR ds:0x105595b4
100ae94d:	10 
100ae94e:	f3 0f 5f 1d bc 95 55 	maxss  xmm3,DWORD PTR ds:0x105595bc
100ae955:	10 
100ae956:	0f 28 c2             	movaps xmm0,xmm2
100ae959:	5e                   	pop    esi
100ae95a:	f3 0f 5d c1          	minss  xmm0,xmm1
100ae95e:	f3 0f 10 0d bc ef 13 	movss  xmm1,DWORD PTR ds:0x1013efbc
100ae965:	10 
100ae966:	f3 0f 5f 0d b8 95 55 	maxss  xmm1,DWORD PTR ds:0x105595b8
100ae96d:	10 
100ae96e:	f3 0f 5d d3          	minss  xmm2,xmm3
100ae972:	f3 0f 11 05 b4 95 55 	movss  DWORD PTR ds:0x105595b4,xmm0
100ae979:	10 
100ae97a:	f3 0f 10 05 68 ef 13 	movss  xmm0,DWORD PTR ds:0x1013ef68
100ae981:	10 
100ae982:	f3 0f 5d c1          	minss  xmm0,xmm1
100ae986:	f3 0f 11 15 bc 95 55 	movss  DWORD PTR ds:0x105595bc,xmm2
100ae98d:	10 
100ae98e:	f3 0f 11 05 b8 95 55 	movss  DWORD PTR ds:0x105595b8,xmm0
100ae995:	10 
100ae996:	8b e5                	mov    esp,ebp
100ae998:	5d                   	pop    ebp
100ae999:	c3                   	ret
