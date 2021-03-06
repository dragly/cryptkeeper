#ifndef _CREATESTASHWIZARD_H
#define _CREATESTASHWIZARD_H

class CreateStashWizard {
	public:
	void Show ();
	void Hide ();
	void Restart ();
	void GoBack ();
	void GoForward ();
	CreateStashWizard ();
	virtual ~CreateStashWizard ();
	
	GtkWidget *m_window;
	private:
	enum WizardStage {
		WIZ_START,
		WIZ_PASSWD,
		WIZ_END
	};
      	int m_stage;
	GtkWidget *m_vbox;
	GtkWidget *m_contents;
	GtkWidget *m_magic;
	GtkWidget *m_magic2;
	GtkWidget *m_button_forward;
	GtkWidget *m_button_cancel;

	char *m_mount_dir;
	

	void UpdateStageUI ();
};

#endif /* _CREATESTASHWIZARD_H */
